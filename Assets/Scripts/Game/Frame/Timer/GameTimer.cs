namespace Game.Frame
{
    public delegate void TimerFunction(int id);
    public class GameTimer
    {
        private int _id = 0;
        private float _time = 0;
        private float _maxTime = 0;
        private TimerFunction _function = null;
        private int _loopTimes = 0;
        private bool _isInfinite = false;
        private bool _needRemove = false;
        public int Id => _id;
        public int LoopTimes => _loopTimes;
        public bool IsDone => _time >= _maxTime;
        public bool IsInfinite => _isInfinite;

        public bool NeedRemove
        {
            set
            {
                _needRemove = value;
            }
            get
            {
                return _needRemove;
            }
        }

        public GameTimer(int id, float time, TimerFunction function, int loopTimes)
        {
            if (loopTimes < 0 && loopTimes != -1)
            {
                GameLog.Error("GameTimer contructor error");
            }
            _id = id;
            _time = 0;
            _maxTime = time;
            _function = function;
            _loopTimes = loopTimes;
            _needRemove = false;
            if (_loopTimes == -1)
            {
                _isInfinite = true;
            }
        }

        public void AddTime(float deltaTime)
        {
            _time += deltaTime;
        }

        public void Invoke()
        {
            _function.Invoke(_id);
            _loopTimes--;
        }

        public void Reset()
        {
            _time = 0;
        }
    }
}