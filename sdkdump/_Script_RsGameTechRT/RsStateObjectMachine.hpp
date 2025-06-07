#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_RsGameTechRT {
struct RsSoftStateObject;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct RsStateObjectMachine : public _Script_CoreUObject::Object {
    private: char pad_28[0x18]; public:
    _Script_RsGameTechRT::RsSoftStateObject*& get_CurrentState();
    _Script_RsGameTechRT::RsSoftStateObject*& get_PendingState();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x40
#pragma pack(pop)
}
