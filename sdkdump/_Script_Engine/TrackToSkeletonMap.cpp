#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "TrackToSkeletonMap.hpp"
int32_t& _Script_Engine::TrackToSkeletonMap::get_BoneTreeIndex() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
_Script_CoreUObject::Class* _Script_Engine::TrackToSkeletonMap::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.TrackToSkeletonMap");
    return result;
}
