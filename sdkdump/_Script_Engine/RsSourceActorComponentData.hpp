#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct StaticMeshComponent;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct RsSourceActorComponentData {
    private: char pad_0[0x40]; public:
    void* get_ActorLabel();
    void* get_FolderName();
    _Script_Engine::StaticMeshComponent*& get_StaticMeshComponent();
    int32_t& get_InstanceIndex();
    int32_t& get_SourceMeshArrayIndex();
    int32_t& get_SourceMeshIndex();
    int32_t& get_DestinationMeshIndex();
    void* get_GroupGuid();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
