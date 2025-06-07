#include "..\FUObjectArray.hpp"
#include "BTTaskNode.hpp"
#include "BTTask_MakeNoise.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
float& _Script_AIModule::BTTask_MakeNoise::get_Loudnes() {
    return *(float*)((uintptr_t)this + 0x70);
}
_Script_CoreUObject::Class* _Script_AIModule::BTTask_MakeNoise::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/AIModule.BTTask_MakeNoise");
    return result;
}
