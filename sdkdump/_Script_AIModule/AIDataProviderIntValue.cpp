#include "..\FUObjectArray.hpp"
#include "AIDataProviderIntValue.hpp"
#include "AIDataProviderTypedValue.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
int32_t& _Script_AIModule::AIDataProviderIntValue::get_DefaultValue() {
    return *(int32_t*)((uintptr_t)this + 0x28);
}
_Script_CoreUObject::Class* _Script_AIModule::AIDataProviderIntValue::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/AIModule.AIDataProviderIntValue");
    return result;
}
