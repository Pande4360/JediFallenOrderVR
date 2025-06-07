#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
struct CurveTable;
}
namespace _Script_Engine {
struct DataTable;
}
namespace _Script_Engine {
struct TableRowBase;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct DataTableFunctionLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    void GetDataTableRowNames(_Script_Engine::DataTable* Table, void*& OutRowNames);
    bool GetDataTableRowFromName(_Script_Engine::DataTable* Table, void* RowName, _Script_Engine::TableRowBase& OutRow);
    void* GetDataTableColumnAsString(_Script_Engine::DataTable* DataTable, void* PropertyName);
    void EvaluateCurveTableRow(_Script_Engine::CurveTable* CurveTable, void* RowName, float InXY, void*& OutResult, float& OutXY, void* ContextString);
    bool DoesDataTableRowExist(_Script_Engine::DataTable* Table, void* RowName);
}; // Size: 0x28
#pragma pack(pop)
}
