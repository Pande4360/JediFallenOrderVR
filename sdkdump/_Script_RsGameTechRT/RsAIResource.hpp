#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsAIResource : public _Script_CoreUObject::Object {
    private: char pad_28[0xe0]; public:
    bool get_bIsGlobalResource();
    void set_bIsGlobalResource(bool value);
    bool get_bUseMaxAIResourceCount();
    void set_bUseMaxAIResourceCount(bool value);
    int32_t& get_MaxAIResourceCount();
    bool get_bQueuedRequestsBlock();
    void set_bQueuedRequestsBlock(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x108
#pragma pack(pop)
}
