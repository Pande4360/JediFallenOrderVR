#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "EdGraphSchemaAction.hpp"
void* _Script_Engine::EdGraphSchemaAction::get_MenuDescriptionArray() {
    return (void*)((uintptr_t)this + 0x70);
}
void* _Script_Engine::EdGraphSchemaAction::get_MenuDescription() {
    return (void*)((uintptr_t)this + 0x8);
}
void* _Script_Engine::EdGraphSchemaAction::get_TooltipDescription() {
    return (void*)((uintptr_t)this + 0x20);
}
void* _Script_Engine::EdGraphSchemaAction::get_FullSearchTitlesArray() {
    return (void*)((uintptr_t)this + 0x80);
}
void* _Script_Engine::EdGraphSchemaAction::get_Category() {
    return (void*)((uintptr_t)this + 0x38);
}
void* _Script_Engine::EdGraphSchemaAction::get_Keywords() {
    return (void*)((uintptr_t)this + 0x50);
}
int32_t& _Script_Engine::EdGraphSchemaAction::get_SectionID() {
    return *(int32_t*)((uintptr_t)this + 0x6c);
}
int32_t& _Script_Engine::EdGraphSchemaAction::get_Grouping() {
    return *(int32_t*)((uintptr_t)this + 0x68);
}
void* _Script_Engine::EdGraphSchemaAction::get_FullSearchKeywordsArray() {
    return (void*)((uintptr_t)this + 0x90);
}
void* _Script_Engine::EdGraphSchemaAction::get_FullSearchCategoryArray() {
    return (void*)((uintptr_t)this + 0xa0);
}
void* _Script_Engine::EdGraphSchemaAction::get_LocalizedMenuDescriptionArray() {
    return (void*)((uintptr_t)this + 0xb0);
}
void* _Script_Engine::EdGraphSchemaAction::get_LocalizedFullSearchTitlesArray() {
    return (void*)((uintptr_t)this + 0xc0);
}
void* _Script_Engine::EdGraphSchemaAction::get_LocalizedFullSearchKeywordsArray() {
    return (void*)((uintptr_t)this + 0xd0);
}
void* _Script_Engine::EdGraphSchemaAction::get_LocalizedFullSearchCategoryArray() {
    return (void*)((uintptr_t)this + 0xe0);
}
void* _Script_Engine::EdGraphSchemaAction::get_SearchText() {
    return (void*)((uintptr_t)this + 0xf0);
}
_Script_CoreUObject::Class* _Script_Engine::EdGraphSchemaAction::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"ScriptStruct /Script/Engine.EdGraphSchemaAction");
    return result;
}
