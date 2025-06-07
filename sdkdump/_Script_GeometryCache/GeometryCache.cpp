#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "..\_Script_CoreUObject\Object.hpp"
#include "GeometryCache.hpp"
int32_t& _Script_GeometryCache::GeometryCache::get_EndFrame() {
    return *(int32_t*)((uintptr_t)this + 0x5c);
}
void* _Script_GeometryCache::GeometryCache::get_Materials() {
    return (void*)((uintptr_t)this + 0x30);
}
void* _Script_GeometryCache::GeometryCache::get_Tracks() {
    return (void*)((uintptr_t)this + 0x40);
}
int32_t& _Script_GeometryCache::GeometryCache::get_StartFrame() {
    return *(int32_t*)((uintptr_t)this + 0x58);
}
_Script_CoreUObject::Class* _Script_GeometryCache::GeometryCache::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/GeometryCache.GeometryCache");
    return result;
}
