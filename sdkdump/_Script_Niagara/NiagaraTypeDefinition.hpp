#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_CoreUObject {
struct Struct;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_CoreUObject {
struct Enum;
}
namespace _Script_Niagara {
#pragma pack(push, 1)
struct NiagaraTypeDefinition {
    private: char pad_0[0x18]; public:
    _Script_CoreUObject::Struct*& get_Struct();
    _Script_CoreUObject::Enum*& get_Enum();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
