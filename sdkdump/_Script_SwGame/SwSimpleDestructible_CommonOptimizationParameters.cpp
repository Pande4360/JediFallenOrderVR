#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "SwSimpleDestructible_CommonOptimizationParameters.hpp"
void* _Script_SwGame::SwSimpleDestructible_CommonOptimizationParameters::get_ParamsPerComponents() {
    return (void*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_SwGame::SwSimpleDestructible_CommonOptimizationParameters::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/SwGame.SwSimpleDestructible_CommonOptimizationParameters");
    return result;
}
