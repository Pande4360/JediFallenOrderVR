#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsPhysicalAnimationProfilesQueueOperationData {
    private: char pad_0[0x180]; public:
    void* get_m_SkeletalMeshComponent();
    void* get_m_Operation();
    void* get_m_OperationParameters();
    void* get_m_PhysicalAnimationParameters();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x180
#pragma pack(pop)
}
