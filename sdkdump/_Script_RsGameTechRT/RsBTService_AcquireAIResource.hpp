#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_AIModule\BTService.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsBTService_AcquireAIResource : public _Script_AIModule::BTService {
    private: char pad_70[0x48]; public:
    void* get_AcquireResourceParameters();
    bool get_bRequestWhenUnacquired();
    void set_bRequestWhenUnacquired(bool value);
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xb8
#pragma pack(pop)
}
