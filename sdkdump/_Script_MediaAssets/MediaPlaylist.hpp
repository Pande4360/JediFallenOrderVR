#pragma once
#include <Windows.h>
#include <cstdint>
#include <string>
#include <string_view>
#include "..\_Script_CoreUObject\Object.hpp"
namespace _Script_CoreUObject {
struct Class;
}
namespace _Script_MediaAssets {
struct MediaSource;
}
namespace _Script_MediaAssets {
#pragma pack(push, 1)
struct MediaPlaylist : public _Script_CoreUObject::Object {
    private: char pad_28[0x10]; public:
    void* get_Items();
    static _Script_CoreUObject::Class* static_class();
    bool Replace(int32_t Index, _Script_MediaAssets::MediaSource* Replacement);
    bool RemoveAt(int32_t Index);
    bool Remove(_Script_MediaAssets::MediaSource* MediaSource);
    int32_t Num();
    void Insert(_Script_MediaAssets::MediaSource* MediaSource, int32_t Index);
    _Script_MediaAssets::MediaSource* GetRandom(int32_t& OutIndex);
    _Script_MediaAssets::MediaSource* GetPrevious(int32_t& InOutIndex);
    _Script_MediaAssets::MediaSource* GetNext(int32_t& InOutIndex);
    _Script_MediaAssets::MediaSource* Get(int32_t Index);
    bool AddUrl(void* URL);
    bool AddFile(void* FilePath);
    bool Add(_Script_MediaAssets::MediaSource* MediaSource);
}; // Size: 0x38
#pragma pack(pop)
}
