using FlowCanvas;

namespace Game.Main
{
    public class GuideStart : FlowNode
    {
        private FlowOutput _output;

        protected override void RegisterPorts()
        {
            _output = AddFlowOutput("outPut");
            _output.Call(new Flow());
            
        }
        
        public override void OnGraphStarted()
        {
            
        }
    }
}