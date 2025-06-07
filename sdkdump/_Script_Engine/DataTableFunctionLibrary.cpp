#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "CurveTable.hpp"
#include "DataTable.hpp"
#include "DataTableFunctionLibrary.hpp"
#include "TableRowBase.hpp"
_Script_CoreUObject::Class* _Script_Engine::DataTableFunctionLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.DataTableFunctionLibrary");
    return result;
}
bool _Script_Engine::DataTableFunctionLibrary::GetDataTableRowFromName(_Script_Engine::DataTable* Table, void* RowName, _Script_Engine::TableRowBase& OutRow) {
    return;
}
void _Script_Engine::DataTableFunctionLibrary::GetDataTableRowNames(_Script_Engine::DataTable* Table, void*& OutRowNames) {
    return;
}
void* _Script_Engine::DataTableFunctionLibrary::GetDataTableColumnAsString(_Script_Engine::DataTable* DataTable, void* PropertyName) {
    return;
}
void _Script_Engine::DataTableFunctionLibrary::EvaluateCurveTableRow(_Script_Engine::CurveTable* CurveTable, void* RowName, float InXY, void*& OutResult, float& OutXY, void* ContextString) {
    return;
}
bool _Script_Engine::DataTableFunctionLibrary::DoesDataTableRowExist(_Script_Engine::DataTable* Table, void* RowName) {
    return;
}
