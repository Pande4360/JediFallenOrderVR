#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "RsDirectionalAnimData.hpp"
#include "RsNestedAttackerDirectionAnimData.hpp"
#include "RsSyncDefinition.hpp"
void* _Script_RsGameTechRT::RsNestedAttackerDirectionAnimData::get_ReactionDataMapping() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_RsGameTechRT::RsNestedAttackerDirectionAnimData::get_DefaultAnimation() {
    return (void*)((uintptr_t)this + 0x80);
}
_Script_RsGameTechRT::RsSyncDefinition*& _Script_RsGameTechRT::RsNestedAttackerDirectionAnimData::get_DefaultSyncDef() {
    return *(_Script_RsGameTechRT::RsSyncDefinition**)((uintptr_t)this + 0xc8);
}
bool _Script_RsGameTechRT::RsNestedAttackerDirectionAnimData::get_bUseReactorAsMasterForSync() {
    return (*(uint8_t*)((uintptr_t)this + 0xd0 + 0)) & 1 != 0;
}
void _Script_RsGameTechRT::RsNestedAttackerDirectionAnimData::set_bUseReactorAsMasterForSync(bool value) {
    const auto cur_value = *(uint8_t*)((uintptr_t)this + 0xd0 + 0);
    *(uint8_t*)((uintptr_t)this + 0xd0 + 0) = (cur_value & ~1) | (value ? 1 : 0);
}
_Script_CoreUObject::Class* _Script_RsGameTechRT::RsNestedAttackerDirectionAnimData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/RsGameTechRT.RsNestedAttackerDirectionAnimData");
    return result;
}
