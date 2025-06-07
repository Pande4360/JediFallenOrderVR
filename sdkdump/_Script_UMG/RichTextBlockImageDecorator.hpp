#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "RichTextBlockDecorator.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_UMG {
#pragma pack(push, 1)
struct RichTextBlockImageDecorator : public RichTextBlockDecorator {
    private: char pad_28[0x8]; public:
    _Script_Engine::DataTable*& get_ImageSet();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x30
#pragma pack(pop)
}
