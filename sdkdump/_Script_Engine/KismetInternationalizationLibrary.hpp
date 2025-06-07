#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "BlueprintFunctionLibrary.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_Engine {
#pragma pack(push, 1)
struct KismetInternationalizationLibrary : public BlueprintFunctionLibrary {
    static _Script_CoreUObject::Class* static_class();
    bool SetCurrentLocale(void* Culture, bool SaveToConfig);
    bool SetCurrentLanguageAndLocale(void* Culture, bool SaveToConfig);
    bool SetCurrentLanguage(void* Culture, bool SaveToConfig);
    bool SetCurrentCulture(void* Culture, bool SaveToConfig);
    bool SetCurrentAssetGroupCulture(void* AssetGroup, void* Culture, bool SaveToConfig);
    void* GetCurrentLocale();
    void* GetCurrentLanguage();
    void* GetCurrentCulture();
    void* GetCurrentAssetGroupCulture(void* AssetGroup);
    void ClearCurrentAssetGroupCulture(void* AssetGroup, bool SaveToConfig);
}; // Size: 0x28
#pragma pack(pop)
}
