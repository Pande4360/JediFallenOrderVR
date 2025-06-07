#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\Actor.hpp"
namespace _Script_Engine {
struct SkeletalMeshComponent;
}
namespace _Script_Engine {
struct MaterialInstanceDynamic;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Game_Characters_BuddyDroid_01_Logic_BP_BuddyDroid_Tourguide {
#pragma pack(push, 1)
struct BP_BuddyDroid_Tourguide_C : public _Script_Engine::Actor {
    private: char pad_360[0x20]; public:
    void* get_UberGraphFrame();
    _Script_Engine::SkeletalMeshComponent*& get_SkeletalMesh();
    _Script_Engine::MaterialInstanceDynamic*& get_EyeMaterial();
    int32_t& get_EyeMaterialIndex();
    static _Script_CoreUObject::Class* static_class();
    void UpdateEyeMaterial();
    void UserConstructionScript0();
    void ReceiveTick0(float DeltaSeconds);
    void ExecuteUbergraph_BP_BuddyDroid_Tourguide(int32_t EntryPoint);
}; // Size: 0x380
#pragma pack(pop)
}
