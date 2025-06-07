#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "FastArraySerializerItem.hpp"
int32_t& _Script_Engine::FastArraySerializerItem::get_ReplicationID() {
    return *(int32_t*)((uintptr_t)this + 0x0);
}
int32_t& _Script_Engine::FastArraySerializerItem::get_ReplicationKey() {
    return *(int32_t*)((uintptr_t)this + 0x4);
}
int32_t& _Script_Engine::FastArraySerializerItem::get_MostRecentArrayReplicationKey() {
    return *(int32_t*)((uintptr_t)this + 0x8);
}
_Script_CoreUObject::Class* _Script_Engine::FastArraySerializerItem::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.FastArraySerializerItem");
    return result;
}
