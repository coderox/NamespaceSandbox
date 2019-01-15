using System.Diagnostics;
using Windows.UI.Xaml.Controls;

namespace Client
{
    public sealed partial class MainPage : Page
    {
        public MainPage()
        {
            this.InitializeComponent();

            var cxComponent = new CppCxComponent.Component();
            Debug.WriteLine(cxComponent.Echo("world"));

            var anotherCxComponent = new CppCxComponent.Another.Component();
            Debug.WriteLine(anotherCxComponent.Echo("world"));

            var winrtComponent = new CppWinRTComponent.Component();
            winrtComponent.Another = new CppWinRTComponent.Another.Component();
            Debug.WriteLine(winrtComponent.Echo("world"));
        }
    }
}
