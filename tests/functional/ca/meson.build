configure_file(
  input : 'config.nix.in',
  output : 'config.nix',
  configuration : test_confdata,
)

suites += {
  'name': 'ca',
  'deps': [],
  'tests': [
    'build-cache.sh',
    'build-with-garbage-path.sh',
    'build.sh',
    'concurrent-builds.sh',
    'derivation-advanced-attributes.sh',
    'derivation-json.sh',
    'duplicate-realisation-in-closure.sh',
    'eval-store.sh',
    'gc.sh',
    'import-from-derivation.sh',
    'new-build-cmd.sh',
    'nix-copy.sh',
    'nix-run.sh',
    'nix-shell.sh',
    'post-hook.sh',
    'recursive.sh',
    'repl.sh',
    'selfref-gc.sh',
    'signatures.sh',
    'substitute.sh',
    'why-depends.sh',
  ],
  'workdir': meson.current_source_dir(),
}
