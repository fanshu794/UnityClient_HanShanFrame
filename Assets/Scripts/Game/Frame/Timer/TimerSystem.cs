using System.Collections.Generic;
using Game.Frame;
using Game.Main;

namespace Game.Frame
{
    public class TimerSystem : BaseSystem
    {
        private int _updateIndex = -1;
        private int _fixedUpdateIndex = -1;
        private List<GameTimer> _updateTimers = new List<GameTimer>();
        private List<GameTimer> _fixedUpdateTimers = new List<GameTimer>();
        private List<int> _removeCache = new List<int>();

        public TimerSystem()
        {
            _updateIndex = -1;
            _fixedUpdateIndex = -1;
        }

        /// <summary>
        /// 
        /// </summary>
        /// <param name="time">间隔时间</param>
        /// <param name="timerFunction">回调函数</param>
        /// <param name="loopTimes">执行次数，默认参数为-1，表示无限循环</param>
        /// <returns></returns>
        public int AddTimer(float time, TimerFunction timerFunction, int loopTimes = -1)
        {
            if (loopTimes <= 0 && loopTimes != -1)
            {
                GameLog.Error("AddTimer Error");
                return -1;
            }
            _updateTimers.Add(new GameTimer(++_updateIndex, time, timerFunction, loopTimes));
            return _updateIndex;
        }

        public void RemoveTimer(int timerId)
        {
            GameTimer targetTimer = null;
            foreach (var timer in _updateTimers)
            {
                if (timer.Id == timerId)
                {
                    targetTimer = timer;
                    break;
                }
            }

            if (targetTimer == null)
            {
                GameLog.Error($"找不到timer id = {timerId}");
            }
            else
            {
                targetTimer.NeedRemove = true;
            }
        }
        
        public void RemoveFixedTimer(int timerId)
        {
            GameTimer targetTimer = null;
            foreach (var timer in _fixedUpdateTimers)
            {
                if (timer.Id == timerId)
                {
                    targetTimer = timer;
                    break;
                }
            }

            if (targetTimer == null)
            {
                GameLog.Error($"找不到timer id = {timerId}");
            }
            else
            {
                targetTimer.NeedRemove = true;
            }
        }

        public int AddFixedTimer(float time, TimerFunction timerFunction, int loopTimes = -1)
        {
            if (loopTimes <= 0 && loopTimes != -1)
            {
                GameLog.Error("AddTimer Error");
                return -1;
            }
            _fixedUpdateTimers.Add(new GameTimer(++_fixedUpdateIndex, time, timerFunction, loopTimes));
            return _fixedUpdateIndex;
        }

        public override void Dispose()
        {
            _updateTimers.Clear();
            _fixedUpdateTimers.Clear();
            _updateIndex = -1;
            _fixedUpdateIndex = -1;
        }

        private void Check(List<GameTimer> timerList, float deltaTime)
        {
            for (int i = timerList.Count - 1; i >= 0; i--)
            {
                var timer = timerList[i];
                timer.AddTime(deltaTime);
                //计时器到时间了
                if (timer.IsDone)
                {
                    //这样写是为了注册了立马销毁的timer不执行回调函数
                    if (timer.NeedRemove)
                    {
                        timerList.RemoveAt(i);
                        continue;
                    }
                    //执行回调，循环次数-1
                    timer.Invoke();
                    //立马check一次，有可能在回调函数里remove了timer
                    if (timer.NeedRemove)
                    {
                        timerList.RemoveAt(i);
                        continue;
                    }
                    //如果无限循环
                    if (timer.IsInfinite)
                    {
                        timer.Reset();
                    }
                    else
                    {
                        //如果循环次数为0，需要移除
                        if (timer.LoopTimes <= 0)
                        {
                            timerList.RemoveAt(i);
                        }
                        else
                        {
                            timer.Reset();
                        }
                    }
                }
            }
        }

        public override void Update(float deltaTime)
        {
            if (_updateTimers.Count == 0)
            {
                return;
            }

            Check(_updateTimers, deltaTime);
        }

        public override void FixedUpdate(float deltaTime)
        {
            if (_fixedUpdateTimers.Count == 0)
            {
                return;
            }

            Check(_fixedUpdateTimers, deltaTime);
        }
    }
}