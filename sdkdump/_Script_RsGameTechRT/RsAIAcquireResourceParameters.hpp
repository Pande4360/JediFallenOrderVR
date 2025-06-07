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
struct RsAIAcquireResourceParameters {
    private: char pad_0[0x40]; public:
    void* get_ResourceClass();
    bool get_bQueued();
    void set_bQueued(bool value);
    bool get_bTryOnce();
    void set_bTryOnce(bool value);
    float& get_Timeout();
    void* get_ResourceProvider();
    void* get_ResourceProviderKey();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
