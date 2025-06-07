#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "ReporterBase.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct ReporterGraph : public ReporterBase {
    private: char pad_30[0x78]; public:
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0xa8
#pragma pack(pop)
}
