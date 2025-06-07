#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Vector.hpp"
#include "..\_Script_Engine\BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsTechRT {
struct rsActor;
}
namespace _Script_RsTechRT {
struct RsUID;
}
namespace _Script_RsTechRT {
struct RsTopology;
}
namespace _Script_Engine {
struct Actor;
}
namespace _Script_RsTechRT {
#pragma pack(push, 1)
struct RsEvent : public _Script_Engine::BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool UnbindEventByWorldEventID(_Script_RsTechRT::RsUID& worldEventID);
    bool BindEventToTopologyChange(_Script_RsTechRT::RsUID& worldEventID, _Script_RsTechRT::rsActor* Target, _Script_RsTechRT::RsTopology& topologyPatch, void* eventDelegate, bool continuous);
    bool BindEventToDirectionChange(_Script_RsTechRT::RsUID& worldEventID, _Script_Engine::Actor* Target, void* eventDelegate, _Script_CoreUObject::Vector directionReference, bool continuous);
}; // Size: 0x28
#pragma pack(pop)
}
