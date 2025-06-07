#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct PlatformInterfaceWebResponse : public _Script_CoreUObject::Object {
    private: char pad_28[0x88]; public:
    void* get_OriginalURL();
    int32_t& get_ResponseCode();
    int32_t& get_Tag();
    void* get_StringResponse();
    void* get_BinaryResponse();
    static _Script_CoreUObject::Class* static_class();
    int32_t GetNumHeaders();
    void* GetHeaderValue(void* HeaderName);
    void GetHeader(int32_t HeaderIndex, void*& Header, void*& Value);
}; // Size: 0xb0
#pragma pack(pop)
}
