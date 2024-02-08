using FlowCanvas;

namespace Game.Main
{
    public class GuideNode1 : FlowNode
    {
        private FlowOutput _output;
        private FlowInput _input;
        public int i = 1;

        protected override void RegisterPorts()
        {
            _input = AddFlowInput("inPut", flow => {_output.Call(flow);});
            _output = AddFlowOutput("outPut");
            
        }
    }
}