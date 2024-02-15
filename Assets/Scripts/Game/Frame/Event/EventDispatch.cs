using System;
using System.Collections.Generic;

namespace Game.Frame
{
    public class EventDispatch
    {
        private Dictionary<int, List<Delegate>> _dicEvents = null;
        protected Dictionary<int, List<Delegate>> Events
        {
            get
            {
                if (_dicEvents == null)
                {
                    _dicEvents = new Dictionary<int, List<Delegate>>();
                }

                return _dicEvents;
            }
        }

        public void AddEvent(int eventId, Action evt)
        {
            if (evt == null)
            {
                return;
            }

            List<Delegate> evts;
            if (Events.TryGetValue(eventId, out evts))
            {
                if (evts != null)
                {
                    evts.Add(evt);
                }
            }
            else
            {
                evts = new List<Delegate>(10);
                evts.Add(evt);
                Events.Add(eventId, evts);
            }
        }

        public void RemoveEvent(int eventId, Action evt)
        {
            if (_dicEvents == null || evt == null) 
            {
                return;
            }

            List<Delegate> evts;
            if (Events.TryGetValue(eventId, out evts) && evts != null)
            {
                evts.Remove(evt);
            }
        }
        
        public void AddEvent<T>(int eventId, Action<T> evt)
        {
            if (evt == null)
            {
                return;
            }

            List<Delegate> evts;
            if (Events.TryGetValue(eventId, out evts))
            {
                if (evts != null)
                {
                    evts.Add(evt);
                }
            }
            else
            {
                evts = new List<Delegate>(10);
                evts.Add(evt);
                Events.Add(eventId, evts);
            }
        }
        
        public void RemoveEvent<T>(int eventId, Action<T> evt)
        {
            if (_dicEvents == null || evt == null) 
            {
                return;
            }

            List<Delegate> evts;
            if (Events.TryGetValue(eventId, out evts) && evts != null)
            {
                evts.Remove(evt);
            }
        }
        
        public void AddEvent<T1, T2>(int eventId, Action<T1, T2> evt)
        {
            if (evt == null)
            {
                return;
            }

            List<Delegate> evts;
            if (Events.TryGetValue(eventId, out evts))
            {
                if (evts != null)
                {
                    evts.Add(evt);
                }
            }
            else
            {
                evts = new List<Delegate>(10);
                evts.Add(evt);
                Events.Add(eventId, evts);
            }
        }
        
        public void RemoveEvent<T1, T2>(int eventId, Action<T1, T2> evt)
        {
            if (_dicEvents == null || evt == null) 
            {
                return;
            }

            List<Delegate> evts;
            if (Events.TryGetValue(eventId, out evts) && evts != null)
            {
                evts.Remove(evt);
            }
        }

        public void TriggerEvent(int eventId)
        {
            if (_dicEvents == null)
            {
                return;
            }

            List<Delegate> evts = null;
            if (_dicEvents.TryGetValue(eventId, out evts) && evts != null)
            {
                Action act = null;
                for (int i = evts.Count - 1; i >= 0; i--)
                {
                    act = evts[i] as Action;
                    if (act != null)
                    {
                        act();
                    }
                }
            }
        }
        
        public void TriggerEvent<T>(int eventId, T v1)
        {
            if (_dicEvents == null)
            {
                return;
            }

            List<Delegate> evts = null;
            if (_dicEvents.TryGetValue(eventId, out evts) && evts != null)
            {
                Action<T> act = null;
                for (int i = evts.Count - 1; i >= 0; i--)
                {
                    act = evts[i] as Action<T>;
                    if (act != null)
                    {
                        act(v1);
                    }
                }
            }
        }
        
        public void TriggerEvent<T1, T2>(int eventId, T1 v1, T2 v2)
        {
            if (_dicEvents == null)
            {
                return;
            }

            List<Delegate> evts = null;
            if (_dicEvents.TryGetValue(eventId, out evts) && evts != null)
            {
                Action<T1, T2> act = null;
                for (int i = evts.Count - 1; i >= 0; i--)
                {
                    act = evts[i] as Action<T1, T2>;
                    if (act != null)
                    {
                        act(v1, v2);
                    }
                }
            }
        }
    }
}