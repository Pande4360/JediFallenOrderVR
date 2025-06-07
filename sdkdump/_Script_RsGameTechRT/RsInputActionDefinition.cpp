#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "..\_Script_Engine\DataAsset.hpp"
#include "RsInputActionDefinition.hpp"
void* _Script_RsGameTechRT::RsInputActionDefinition::get_ActionName() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsInputActionDefinition::get_BufferMask() {
    return (void*)((uintptr_t)this + 0x38);
}
void _Script_RsGameTechRT::RsInputActionDefinition::set_bResetBufferedActionOnSuccess(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x61 + 0);
    *(uint8_t*)((uintptr_t)this + 0x61 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void* _Script_RsGameTechRT::RsInputActionDefinition::get_ModifiersToClearOnBufferEnd() {
    return (void*)((uintptr_t)this + 0x48);
}
bool _Script_RsGameTechRT::RsInputActionDefinition::get_bBufferWhenHeld() {
    return (*(uint8_t*)((uintptr_t)this + 0x58 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsInputActionDefinition::set_bCheckEvenIfAlreadyConsumed(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x60 + 0);
    *(uint8_t*)((uintptr_t)this + 0x60 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
void _Script_RsGameTechRT::RsInputActionDefinition::set_bBufferWhenHeld(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x58 + 0);
    *(uint8_t*)((uintptr_t)this + 0x58 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
float& _Script_RsGameTechRT::RsInputActionDefinition::get_OnHeldTime() {
    return *(float*)((uintptr_t)this + 0x5c);
}
bool _Script_RsGameTechRT::RsInputActionDefinition::get_bCheckEvenIfAlreadyConsumed() {
    return (*(uint8_t*)((uintptr_t)this + 0x60 + 0)) & 1 != 0;
}
bool _Script_RsGameTechRT::RsInputActionDefinition::get_bResetBufferedActionOnSuccess() {
    return (*(uint8_t*)((uintptr_t)this + 0x61 + 0)) & 1 != 0;
}
void* _Script_RsGameTechRT::RsInputActionDefinition::get_OnPressed() {
    return (void*)((uintptr_t)this + 0x68);
}
void* _Script_RsGameTechRT::RsInputActionDefinition::get_OnHeld() {
    return (void*)((uintptr_t)this + 0x78);
}
void* _Script_RsGameTechRT::RsInputActionDefinition::get_OnReleased() {
    return (void*)((uintptr_t)this + 0x88);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsInputActionDefinition::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsInputActionDefinition");
    return result;
}
void _Script_RsGameTechRT::RsInputActionDefinition::PopulateActionNameList(_Script_CoreUObject::Object* ContextObject, void*& Options) {
    return;
}
void _Script_RsGameTechRT::RsInputActionDefinition::FunctionSignature() {
    return;
}
bool _Script_RsGameTechRT::RsInputActionDefinition::BoolReturnFunctionSignature(void* InActionName) {
    return;
}
void _Script_RsGameTechRT::RsInputActionDefinition::BoolRefParamFunctionSignature(void* InActionName, bool& Result) {
    return;
}
