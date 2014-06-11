noinst_PROGRAMS=getpinyindemo pinyincmpdemo

lib_LTLIBRARIES=libpinyin-kit.la
libpinyin_kit_la_SOURCES=getpinyin.c getpinyin.h pinyin.h \
                     pinyincmp.c  pinyincmp.h     

getpinyindemo_SOURCES=getpinyindemo.c
getpinyindemo_LDFLAGS=-lpinyin-kit
getpinyindemo_CFLAGS=-Wall

pinyincmpdemo_SOURCES=pinyincmpdemo.c
pinyincmpdemo_LDFLAGS=-lpinyin-kit
pinyincmpdemo_CFLAGS=-Wall

pinyinincludedir=$(includedir)/pinyin-kit
pinyininclude_HEADERS=pinyin.h getpinyin.h pinyincmp.h

