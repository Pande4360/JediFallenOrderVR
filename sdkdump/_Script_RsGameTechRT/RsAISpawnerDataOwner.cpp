#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsAISpawnerDataOwner.hpp"
#include "RsAISpawnerDataOwnerBase.hpp"
void* _Script_RsGameTechRT::RsAISpawnerDataOwner::get_SimpleSpawners() {
    return (void*)((uintptr_t)this + 0x360);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsAISpawnerDataOwner::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsAISpawnerDataOwner");
    return result;
}
bool _Script_RsGameTechRT::RsAISpawnerDataOwner::get_bHasConvertedSpawnerInstancesToActors() {
    return (*(uint8_t*)((uintptr_t)this + 0x370 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsAISpawnerDataOwner::set_bHasConvertedSpawnerInstancesToActors(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0x370 + 0);
    *(uint8_t*)((uintptr_t)this + 0x370 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
