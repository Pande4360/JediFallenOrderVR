#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RsWorldMapStaticMeshActor.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
struct RsMapSectionTag;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsWorldMapStateTransitionStaticMeshActor : public RsWorldMapStaticMeshActor {
    private: char pad_398[0x8]; public:
    int32_t& get_CurrentState();
    static _Script_CoreUObject::Class* static_class();
    void ReceiveStateChanged(int32_t State);
    void ReceiveMapSectionExplored(_Script_RsGameTechRT::RsMapSectionTag& MapSection);
}; // Size: 0x3a0
#pragma pack(pop)
}
