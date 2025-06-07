#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsWorldMapActor.hpp"
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapGatewayActor : public RsWorldMapActor {
    private: char pad_368[0x28]; public:
    void* get_GatewayType();
    bool get_bIsConnectedToSecreteArea();
    void set_bIsConnectedToSecreteArea(bool value);
    bool get_bOverrideSecretAreaVisibility();
    void set_bOverrideSecretAreaVisibility(bool value);
    int32_t& get_ConnectedSectionsExplored();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    void* get_ConnectedSections();
    static _Script_CoreUObject::Class* static_class();
    void* GetConnectedSections();
}; // Size: 0x390
#pragma pack(pop)
}
