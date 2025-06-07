#include "..\FUObjectArray.hpp"
#include "..\_Script_AIModule\BehaviorTree.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAIPOICustomBehaviorData.hpp"
void* _Script_RsGameTechRT::RsAIPOICustomBehaviorData::get_BehaviorTreeAsset() {
    return (void*)((uintptr_t)this + 0x0);
}
void _Script_RsGameTechRT::RsAIPOICustomBehaviorData::set_bInjectAsRootBehaviorTree(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x20 + 0);
    *(uint8_t*)((uintptr_t)this + 0x20 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_AIModule::BehaviorTree*& _Script_RsGameTechRT::RsAIPOICustomBehaviorData::get_BehaviorTree() {
    return *(_Script_AIModule::BehaviorTree**)((uintptr_t)this + 0x18);
}
bool _Script_RsGameTechRT::RsAIPOICustomBehaviorData::get_bInjectAsRootBehaviorTree() {
    return (*(uint8_t*)((uintptr_t)this + 0x20 + 0)) & 1 != 0;
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAIPOICustomBehaviorData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/RsGameTechRT.RsAIPOICustomBehaviorData");
    return result;
}
