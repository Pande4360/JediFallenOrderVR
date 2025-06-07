#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DataTableCategoryHandle {
    private: char pad_0[0x18]; public:
    _Script_Engine::DataTable*& get_DataTable();
    void* get_ColumnName();
    void* get_RowContents();
    static _Script_CoreUObject::Class* static_class();
}; // Size: 0x18
#pragma pack(pop)
}
