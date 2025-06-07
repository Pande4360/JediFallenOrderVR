#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RawDistribution.hpp"
_Script_CoreUObject::Class* _Script_Engine::RawDistribution::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.RawDistribution");
    return result;
}
void* _Script_Engine::RawDistribution::get_Table() {
    return (void*)((uintptr_t)this + 0x0);
}
