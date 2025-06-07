#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsCameraConditional.hpp"
#include "RsCameraConditional_IsInputActive.hpp"
float& _Script_SwGame::RsCameraConditional_IsInputActive::get_DeactivateAfter() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_SwGame::RsCameraConditional_IsInputActive::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/SwGame.RsCameraConditional_IsInputActive");
    return result;
}
void* _Script_SwGame::RsCameraConditional_IsInputActive::get_ActivationInputType() {
    return (void*)((uintptr_t)this + 0x2c);
}
void* _Script_SwGame::RsCameraConditional_IsInputActive::get_DeactivationInputType() {
    return (void*)((uintptr_t)this + 0x2d);
}
