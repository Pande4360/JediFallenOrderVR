#include "..\FUObjectArray.hpp"
#include "ST_ChestRewards.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::get_LocationDescription_17_F93C3B7E40366DA8B5F969BC51B00DE8() {
    return (void*)((uintptr_t)this + 0x10);
}
void* _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::get_LevelName_15_F3C948C7433E3ED5DCD2ABB0D7CCC880() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"UserDefinedStruct /Game/GlobalData/Economy/ST_ChestRewards.ST_ChestRewards");
    return result;
}
void* _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::get_ChestRewardType_11_4D4DD8A24D185A236873E2A15E6FD703() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::get_DroidUnlock_20_1E9DBB4347430BA7D8AD9484E736E50B() {
    return (void*)((uintptr_t)this + 0x21);
}
void* _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::get_CosmeticUnlock_23_2091A4C74F4534C0450728894A948C39() {
    return (void*)((uintptr_t)this + 0x22);
}
void _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::set_isHackChest_26_2724836547D8907CA2712D830EE3EF7D(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x23 + 0);
    *(uint8_t*)((uintptr_t)this + 0x23 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
bool _Game_GlobalData_Economy_ST_ChestRewards::ST_ChestRewards::get_isHackChest_26_2724836547D8907CA2712D830EE3EF7D() {
    return (*(uint8_t*)((uintptr_t)this + 0x23 + 0)) & 1 != 0;
}
