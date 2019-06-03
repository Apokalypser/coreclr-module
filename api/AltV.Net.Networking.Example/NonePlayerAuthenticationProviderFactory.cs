using AltV.Net.NetworkingEntity.Elements.Factories;
using AltV.Net.NetworkingEntity.Elements.Providers;
using net.vieapps.Components.WebSockets;

namespace AltV.Net.Networking.Example
{
    public class NonePlayerAuthenticationProviderFactory : IAuthenticationProviderFactory
    {
        public IAuthenticationProvider Create(WebSocket webSocket)
        {
            return new NonePlayerAuthenticationProvider(webSocket);
        }
    }
}