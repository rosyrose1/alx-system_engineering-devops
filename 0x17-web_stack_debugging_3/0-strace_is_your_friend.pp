# Debug the web stack
# Using strace to find out why Apache is returning a 500 error

file {'/var/www/html/wp-includes/class-wp-locale.phpp':
  ensure => file,
  source => '/var/www/html/wp-includes/class-wp-locale.php',
  before => File['/var/www/html/wp-includes/class-wp-locale.php']
}

file {'/var/www/html/wp-includes/class-wp-locale.php':
  ensure => absent
}
