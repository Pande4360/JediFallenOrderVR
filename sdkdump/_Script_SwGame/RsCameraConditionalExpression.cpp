#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCameraConditional.hpp"
#include "RsCameraConditionalExpression.hpp"
_Script_SwGame::RsCameraConditional*& _Script_SwGame::RsCameraConditionalExpression::get_A() {
    return *(_Script_SwGame::RsCameraConditional**)((uintptr_t)this + 0x28);
}
void* _Script_SwGame::RsCameraConditionalExpression::get_Operator() {
    return (void*)((uintptr_t)this + 0x30);
}
bool _Script_SwGame::RsCameraConditionalExpression::get_bAllowEarlyOut() {
    return (*(uint8_t*)((uintptr_t)this + 0x40 + 0)) & 1 != 0;
}
_Script_SwGame::RsCameraConditional*& _Script_SwGame::RsCameraConditionalExpression::get_B() {
    return *(_Script_SwGame::RsCameraConditional**)((uintptr_t)this + 0x38);
}
void _Script_SwGame::RsCameraConditionalExpression::set_bAllowEarlyOut(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x40 + 0);
    *(uint8_t*)((uintptr_t)this + 0x40 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_SwGame::RsCameraConditionalExpression::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsCameraConditionalExpression");
    return result;
}
