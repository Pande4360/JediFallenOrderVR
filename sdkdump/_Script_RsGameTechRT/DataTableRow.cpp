#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_Engine\DataTable.hpp"
#include "..\_Script_Engine\TableRowBase.hpp"
#include "DataTableRow.hpp"
_Script_Engine::DataTable*& _Script_RsGameTechRT::DataTableRow::get_DataTable() {
    return *(_Script_Engine::DataTable**)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::DataTableRow::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.DataTableRow");
    return result;
}
