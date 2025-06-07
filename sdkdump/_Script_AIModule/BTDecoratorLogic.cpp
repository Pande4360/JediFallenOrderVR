#include "..\FUObjectArray.hpp"
#include "BTDecoratorLogic.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::BTDecoratorLogic::get_Operation() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_AIModule::BTDecoratorLogic::get_Number() {
    return (void*)((uintptr_t)this + 0x2);
}
_Script_CoreUObject::Class* _Script_AIModule::BTDecoratorLogic::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.BTDecoratorLogic");
    return result;
}
