namespace Game.Frame
{
    public abstract class BaseState
    {
        public StateContent Content = null;
        

        public abstract void OnEnterState();
        public abstract void OnExitState();

        public void Dispose()
        {
            Content = null;
        }
    }
}