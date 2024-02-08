namespace Game.Frame
{
    public interface IGameUpdate
    {
        void Update(float deltaTime);
    }
    
    public interface IGameFixUpdate
    {
        void FixedUpdate(float deltaTime);
    }

    public interface IGameLateUpdate
    {
        void LateUpdate();
    }
}