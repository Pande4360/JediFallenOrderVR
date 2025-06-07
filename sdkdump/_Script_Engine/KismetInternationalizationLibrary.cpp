#include "..\FUObjectArray.hpp"
#include "..\_Script_CoreUObject\Class.hpp"
#include "BlueprintFunctionLibrary.hpp"
#include "KismetInternationalizationLibrary.hpp"
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentLanguage(void* Culture, bool SaveToConfig) {
    return;
}
_Script_CoreUObject::Class* _Script_Engine::KismetInternationalizationLibrary::static_class() {
    static auto result = (_Script_CoreUObject::Class*)FUObjectArray::get()->find_uobject(L"Class /Script/Engine.KismetInternationalizationLibrary");
    return result;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentLocale(void* Culture, bool SaveToConfig) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentLanguageAndLocale(void* Culture, bool SaveToConfig) {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentLocale() {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentCulture(void* Culture, bool SaveToConfig) {
    return;
}
bool _Script_Engine::KismetInternationalizationLibrary::SetCurrentAssetGroupCulture(void* AssetGroup, void* Culture, bool SaveToConfig) {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentLanguage() {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentCulture() {
    return;
}
void* _Script_Engine::KismetInternationalizationLibrary::GetCurrentAssetGroupCulture(void* AssetGroup) {
    return;
}
void _Script_Engine::KismetInternationalizationLibrary::ClearCurrentAssetGroupCulture(void* AssetGroup, bool SaveToConfig) {
    return;
}
