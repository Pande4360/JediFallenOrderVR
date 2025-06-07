#include "..\FUObjectArray.hpp"
#include "Class.hpp"
#include "PolyglotTextData.hpp"
_Script_CoreUObject::Class* _Script_CoreUObject::PolyglotTextData::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/CoreUObject.PolyglotTextData");
    return result;
}
void* _Script_CoreUObject::PolyglotTextData::get_Key() {
    return (void*)((uintptr_t)this + 0x28);
}
void* _Script_CoreUObject::PolyglotTextData::get_NativeCulture() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_CoreUObject::PolyglotTextData::get_Category() {
    return (void*)((uintptr_t)this + 0x0);
}
void* _Script_CoreUObject::PolyglotTextData::get_LocalizedStrings() {
    return (void*)((uintptr_t)this + 0x48);
}
void* _Script_CoreUObject::PolyglotTextData::get_Namespace() {
    return (void*)((uintptr_t)this + 0x18);
}
void* _Script_CoreUObject::PolyglotTextData::get_NativeString() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_CoreUObject::PolyglotTextData::get_CachedText() {
    return (void*)((uintptr_t)this + 0x98);
}
