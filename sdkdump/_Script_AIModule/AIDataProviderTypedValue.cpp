#include "..\FUObjectArray.hpp"
#include "AIDataProviderTypedValue.hpp"
#include "AIDataProviderValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
void* _Script_AIModule::AIDataProviderTypedValue::get_PropertyType() {
    return (void*)((uintptr_t)this + 0x20);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDataProviderTypedValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDataProviderTypedValue");
    return result;
}
