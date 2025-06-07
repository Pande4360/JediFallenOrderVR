#include "..\FUObjectArray.hpp"
#include "AIDataProviderFloatValue.hpp"
#include "AIDataProviderTypedValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::AIDataProviderFloatValue::get_DefaultValue() {
    return *(float*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDataProviderFloatValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDataProviderFloatValue");
    return result;
}
