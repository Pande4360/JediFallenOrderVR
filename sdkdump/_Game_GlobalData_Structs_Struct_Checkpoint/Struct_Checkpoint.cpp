#include "..\FUObjectArray.hpp"
#include "Struct_Checkpoint.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_GlobalData_Structs_Struct_Checkpoint::Struct_Checkpoint::get_Transform_2_A93690B94DDCA29BC32673A2E883E083() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_GlobalData_Structs_Struct_Checkpoint::Struct_Checkpoint::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Structs/Struct_Checkpoint.Struct_Checkpoint");
    return result;
}
