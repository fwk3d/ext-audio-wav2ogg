#if CODE
AUTORUN {
    recipe("*.wav",0, // in, final ziplevel

        "ext/ext-ffmpeg/ffmpeg.EXE -hide_banner -nostdin -loglevel fatal -y "
        "-i INPUT -c:a libvorbis -b:a 64k OUTPUT.ogg "
        /* -ac 1 -b:a 128k -ar 44100 */
    );
}
#endif
