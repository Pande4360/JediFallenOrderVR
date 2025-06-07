#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_Engine\TableRowBase.hpp"
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_RsGameTechRT {
#pragma pack(push, 1)
struct DataTableRow : public _Script_Engine::TableRowBase {
    private: char pad_8[0x8]; public:
    _Script_Engine::DataTable*& get_DataTable();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x10
#pragma pack(pop)
}
