namespace Game.Frame
{
    public class StateContent
    {
        private BaseState _state = null;

        public void ChangeState(BaseState newState)
        {
            if (newState.Content == null)
            {
                newState.Content = this;
            }
            if (_state != null)
            {
                _state.OnExitState();
                _state.Dispose();
            }

            _state = newState;
            newState.OnEnterState();
        }
    }
}